// undefined FUN_080cb234(void)
// entry 0x80cb234


undefined4 FUN_080cb234(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar3 = DAT_080cb2ac;
  iVar2 = DAT_080cb2a8;
  puVar1 = DAT_080cb2a4;
  uVar6 = DAT_080cb2a8 * *DAT_080cb2a4 + DAT_080cb2ac;
  *DAT_080cb2a4 = uVar6 & 0x7fffffff;
  FUN_0801cf00(param_1,((uVar6 & 0x7fffffff) >> 0x10 & 1) + DAT_080cb2b0 & 0xffff);
  FUN_0801cff0(param_1);
  uVar6 = iVar2 * *puVar1 + iVar3;
  *puVar1 = uVar6 & 0x7fffffff;
  uVar6 = (uVar6 & 0x7fffffff) >> 0x10 & 1;
  if (uVar6 == 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(char *)(param_1 + 0x4c) = (char)uVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
  *(undefined1 *)(param_1 + 0x25) = 0x12;
  iVar3 = DAT_080cb348;
  iVar2 = DAT_080cb344;
  puVar1 = DAT_080cb340;
  uVar6 = DAT_080cb344 * *DAT_080cb340 + DAT_080cb348;
  *(byte *)(param_1 + 0x12) = (byte)(uVar6 >> 0x10) & 1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar6 = iVar2 * (uVar6 & 0x7fffffff) + iVar3;
  *puVar1 = uVar6 & 0x7fffffff;
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + (((uVar6 & 0x7fffffff) >> 0x10 & 0x1f) - 0x10) * 0x100;
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cb34c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  FUN_080cb130(param_1);
  return in_lr;
}


