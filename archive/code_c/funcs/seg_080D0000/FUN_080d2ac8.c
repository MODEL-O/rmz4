// undefined FUN_080d2ac8(void)
// entry 0x80d2ac8


undefined4 FUN_080d2ac8(int param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 in_lr;
  
  FUN_0801cdbc();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0xb00);
  FUN_0801cff0(param_1);
  uVar7 = *DAT_080d2b18 * DAT_080d2b1c + DAT_080d2b20;
  *DAT_080d2b18 = uVar7 & 0x7fffffff;
  uVar7 = (uVar7 & 0x7fffffff) >> 0x10 & 1;
  if (uVar7 == 0) {
    bVar5 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar5 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar5;
  *(char *)(param_1 + 0x4c) = (char)uVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  iVar4 = DAT_080d2bf4;
  iVar3 = DAT_080d2bf0;
  puVar2 = DAT_080d2bec;
  uVar7 = DAT_080d2bf0 * *DAT_080d2bec + DAT_080d2bf4;
  uVar9 = ((uVar7 & 0x7fffffff) >> 0x10 & 0x7f) + 0x100;
  uVar7 = DAT_080d2bf0 * (uVar7 & 0x7fffffff) + DAT_080d2bf4;
  cVar1 = *(char *)(param_1 + 0x11) * '@' + ((byte)(uVar7 >> 0x10) & 0x3f);
  *(short *)(param_1 + 0x50) = (short)uVar9;
  *(short *)(param_1 + 0x52) = (short)(uVar9 >> 1);
  *(char *)(param_1 + 0x24) = cVar1;
  uVar7 = iVar3 * (uVar7 & 0x7fffffff) + iVar4;
  *puVar2 = uVar7 & 0x7fffffff;
  uVar6 = FUN_08129198((uVar7 & 0x7fffffff) >> 0x10,0x14);
  *(undefined1 *)(param_1 + 0x12) = uVar6;
  *(char *)(param_1 + 0x13) = cVar1;
  *(undefined4 *)(param_1 + 100) = 0x80;
  *(undefined4 *)(param_1 + 0x68) = 0x10;
  piVar8 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d2bf8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar8 + 4);
  FUN_080d2a30(param_1);
  return in_lr;
}


