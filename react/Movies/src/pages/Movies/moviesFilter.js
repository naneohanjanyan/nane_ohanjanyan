import { changedArr } from "../../renderMoves";

export function moviesFilter(name) {
    const filteredArr =
      name == ""
        ? changedArr
        : changedArr.filter(
          (value) =>
            value.name.toLowerCase().substring(0, name.length) ===
            name.toLowerCase()
        );
    return filteredArr;
  }