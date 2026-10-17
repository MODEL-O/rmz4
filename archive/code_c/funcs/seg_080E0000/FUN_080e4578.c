// undefined FUN_080e4578(void)
// entry 0x80e4578


undefined4 FUN_080e4578(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  byte *pbVar9;
  undefined4 in_lr;
  
  uVar6 = *DAT_080e45bc * DAT_080e45c0 + DAT_080e45c4;
  *DAT_080e45bc = uVar6 & 0x7fffffff;
  cVar4 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,3);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  uVar8 = DAT_080e45c8;
  if ((cVar4 == '\0') || (uVar8 = DAT_080e45dc, cVar4 == '\x01')) {
    FUN_0801cf00(param_1,uVar8);
  }
  else {
    FUN_0801cf00(param_1,DAT_080e4614);
  }
  FUN_0801cff0(param_1);
  uVar6 = *DAT_080e4618 * DAT_080e461c + DAT_080e4620;
  *DAT_080e4618 = uVar6 & 0x7fffffff;
  uVar6 = (uVar6 & 0x7fffffff) >> 0x10 & 1;
  if (uVar6 == 0) {
    bVar5 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar5 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar5;
  *(char *)(param_1 + 0x4c) = (char)uVar6;
  pbVar9 = (byte *)(param_1 + 0x4a);
  *pbVar9 = *pbVar9 & 0xef | (byte)(uVar6 << 4);
  puVar1 = DAT_080e466c;
  uVar6 = *DAT_080e466c * DAT_080e4670 + DAT_080e4674;
  *DAT_080e466c = uVar6 & 0x7fffffff;
  uVar6 = (uVar6 & 0x7fffffff) >> 0x10 & 1;
  if (uVar6 == 0) {
    bVar5 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar5 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar5;
  *(char *)(param_1 + 0x4d) = (char)uVar6;
  *pbVar9 = *pbVar9 & 0xdf | (byte)(uVar6 << 5);
  iVar3 = DAT_080e46f0;
  iVar2 = DAT_080e46ec;
  uVar6 = DAT_080e46ec * *puVar1 + DAT_080e46f0;
  *(uint *)(param_1 + 0x5c) = ((uVar6 & 0x1ffffff) >> 0x10) + 0x100;
  uVar6 = iVar2 * (uVar6 & 0x7fffffff) + iVar3;
  *puVar1 = uVar6 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (8 - ((uVar6 & 0x7fffffff) >> 0x10 & 0xf)) * 0x40;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  piVar7 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e46f4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar7 + 4);
  FUN_080e4284(param_1);
  return in_lr;
}


