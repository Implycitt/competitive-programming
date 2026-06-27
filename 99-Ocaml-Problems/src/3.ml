let rec at (k: int) (xs: 'a list): 'a option =
  match xs with
  | x :: rest when k == 1 -> Some x
  | _ :: rest when k > 1 -> at (k - 1) rest
  | _ -> None
