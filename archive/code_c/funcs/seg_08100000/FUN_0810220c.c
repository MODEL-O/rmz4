// undefined FUN_0810220c(void)
// entry 0x810220c


undefined4 FUN_0810220c(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  uVar2 = 0;
  iVar3 = 0x1000;
  do {
    local_20 = *(int *)(param_1 + 0x54) + iVar3;
    local_1c = *(int *)(param_1 + 0x58) + 0x1000;
    FUN_080e7824(&local_20,0,uVar2 & 0xff);
    iVar3 = iVar3 + 0x2000;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 8);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810226c);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  FUN_08102270(param_1);
  return in_lr;
}


