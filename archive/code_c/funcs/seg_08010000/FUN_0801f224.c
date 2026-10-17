// undefined FUN_0801f224(void)
// entry 0x801f224


undefined4 FUN_0801f224(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  pbVar1 = DAT_0801f2a0;
  uVar3 = (uint)*DAT_0801f2a0;
  DAT_0801f2a0[3] = 0xff;
  pbVar1[0xc] = 0;
  pbVar1[0xd] = 0;
  pbVar1[0xe] = 0;
  pbVar1[0xf] = 0;
  *(undefined4 *)(pbVar1 + 0x178) = param_1;
  pbVar1[8] = 0;
  iVar2 = DAT_0801f2a4;
  pbVar1[9] = 0;
  pbVar1[DAT_0801f2a4] = 0;
  pbVar1[iVar2 + -1] = 0;
  pbVar1[0x184] = 0xff;
  pbVar1[0x185] = 0xff;
  pbVar1[0x186] = 0xff;
  pbVar1[0x187] = 0xff;
  FUN_0801fe18();
  FUN_0801f884(pbVar1 + 0xe8,DAT_0801f2a8,param_1);
  FUN_08006a94(*(undefined4 *)(uVar3 * 4 + DAT_0801f2ac),pbVar1 + 0x120);
  if ((*(uint *)(*DAT_0801f2b0 + 0x10) & 1 << *(sbyte *)(uVar3 + DAT_0801f2b4)) == 0) {
    FUN_0801d530(*(undefined1 *)(uVar3 + DAT_0801f2b8),0);
  }
  else {
    FUN_0801d530(*(undefined1 *)(uVar3 + DAT_0801f2d8),1);
  }
  FUN_080274b8(DAT_0801f2dc,uVar3);
  return in_lr;
}


