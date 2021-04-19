package printer

import (
	"errors"
	"sort"
)

type Printer struct {
	Priority, Location int
}

type Queue []Printer

func (q *Queue) push(value Printer) {
	(*q) = append((*q), value)
}

func (q *Queue) size() int {
	return len(*q)
}

func (q *Queue) empty() bool {
	return len(*q) == 0
}

func (q *Queue) pop() (Printer, error) {
	if (*q).empty() {
		return Printer{-1, -1}, errors.New("queue is empty")
	}
	value := (*q)[0]
	(*q) = (*q)[1:]
	return value, nil
}

func Solution(priorities []int, location int) int {
	var printer_que Queue

	for i := range priorities {
		printer_que.push(Printer{priorities[i], i})
	}

	sort.Slice(priorities, func(u, v int) bool {
		return priorities[u] > priorities[v]
	})
	index := 0
	for !printer_que.empty() {
		printer, err := printer_que.pop()
		if err != nil {
			return -1
		}
		if printer.Priority != priorities[index] {
			printer_que.push(printer)
			continue
		}
		if printer.Location == location {
			return index + 1
		}
		index++
	}

	return -1
}
