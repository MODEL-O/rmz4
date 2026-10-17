// undefined FUN_0800f870(void)
// entry 0x800f870


void FUN_0800f870(void)

{
  int iVar1;
  undefined4 *puVar2;
  puVar2 = 0x0202ea5c;
  iVar1 = 0x0202e910;
  if ((*(ushort *)(0x0202e910 + 8) & 2) == 0) {
    if ((0x00011ffe < (uint)(*(int *)((*(int *)0x0202dbf0) + 0x54) + 0xfffe2fff)) ||
       (*(int *)((*(int *)0x0202dbf0) + 0x58) <= 0x00129000)) {
      (*(undefined4 *)0x0202ea5c) = 0xa000;
      puVar2[1] = 0x280000;
    }
    else {
      *(undefined4 *)(0x0202e910 + 0x14c) = 0x128000;
      *(undefined4 *)(iVar1 + 0x150) = 0x280000;
    }
  }
  return;
}


