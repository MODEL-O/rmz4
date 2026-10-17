// undefined FUN_080490e0(void)
// entry 0x80490e0


undefined4 FUN_080490e0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xbd) != '\0') &&
     (cVar1 = FUN_0803aabc(*(undefined4 *)(param_1 + 0x28)), cVar1 != '\0')) {
    FUN_080d0c88(1,param_1 + 0x54);
    FUN_08002b10(0x2a);
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08049140);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


