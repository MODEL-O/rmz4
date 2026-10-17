// undefined FUN_0801ff8c(void)
// entry 0x801ff8c


undefined4 FUN_0801ff8c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  iVar2 = DAT_0801ffdc;
  if (param_1 != 0) {
    puVar4 = (ushort *)(DAT_0801ffdc + 0x1a4);
    uVar3 = (uint)*puVar4;
    if (uVar3 < 0x10) {
      iVar1 = uVar3 * 0xc;
      *(undefined4 *)(iVar1 + DAT_0801ffdc + 0xd4) = *param_2;
      *(undefined4 *)(iVar1 + iVar2 + 0xd8) = param_2[1];
      iVar2 = iVar2 + 0xd0;
      *(int *)(iVar1 + iVar2) = param_1;
      *(undefined4 *)((uVar3 + 1) * 0xc + iVar2) = 0;
      *puVar4 = (ushort)(uVar3 + 1);
    }
  }
  return in_lr;
}


