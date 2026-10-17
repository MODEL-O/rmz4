// undefined FUN_0810a024(void)
// entry 0x810a024


undefined4 FUN_0810a024(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = FUN_0810a168(param_1);
  if ((cVar1 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0) {
      return in_lr;
    }
    FUN_08002b10(0x2b);
  }
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810a07c);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  return in_lr;
}


