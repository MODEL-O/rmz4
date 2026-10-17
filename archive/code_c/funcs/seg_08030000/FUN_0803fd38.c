// undefined FUN_0803fd38(void)
// entry 0x803fd38


undefined4 FUN_0803fd38(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x2c) + 0xfa) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803fd80);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  else {
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar1 = FUN_0803a99c(param_1,3);
    if (((cVar1 != '\0') ||
        (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) ||
       ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
      FUN_08002b10(0x6d);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803fde8);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      FUN_0803fd20(param_1);
    }
  }
  return in_lr;
}


