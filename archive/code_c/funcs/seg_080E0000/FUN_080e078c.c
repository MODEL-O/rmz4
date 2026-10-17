// undefined FUN_080e078c(void)
// entry 0x80e078c


undefined4 FUN_080e078c(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  FUN_08002b10(0x2a);
  uVar1 = DAT_080e0814 * *DAT_080e0810 + DAT_080e0818;
  local_1c = *(int *)(param_1 + 0x54) + (((uVar1 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  uVar1 = DAT_080e0814 * (uVar1 & 0x7fffffff) + DAT_080e0818;
  *DAT_080e0810 = uVar1 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + ((uVar1 & 0x7fffffff) >> 0x10 & 7) * 0x100 + DAT_080e081c;
  FUN_080d0c88(1,&local_1c);
  FUN_080e0824(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0820);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


