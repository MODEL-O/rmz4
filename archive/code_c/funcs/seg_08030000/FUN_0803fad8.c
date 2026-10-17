// undefined FUN_0803fad8(void)
// entry 0x803fad8


undefined4 FUN_0803fad8(int param_1,undefined4 *param_2,byte param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  iVar6 = FUN_08005500(*DAT_0803fb28);
  iVar3 = DAT_0803fb8c;
  iVar2 = DAT_0803fb2c;
  if (iVar6 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar6 + 9) = 7;
      *(undefined4 *)(iVar6 + 0x14) = **(undefined4 **)(iVar2 + 0x1c);
      *(byte *)(iVar6 + 0xb) = *(byte *)(iVar6 + 0xb) & 0xbf;
      *(undefined1 *)(iVar6 + 0x25) = 0x10;
      *(undefined2 *)(iVar6 + 0x20) = *DAT_0803fb30;
      uVar4 = *DAT_0803fb34;
    }
    else {
      *(undefined1 *)(iVar6 + 9) = 7;
      *(undefined4 *)(iVar6 + 0x14) = **(undefined4 **)(iVar3 + 0x1c);
      *(byte *)(iVar6 + 0xb) = *(byte *)(iVar6 + 0xb) & 0xbf;
      *(undefined1 *)(iVar6 + 0x25) = 0x10;
      *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)(DAT_0803fb90 + 2);
      uVar4 = *(undefined1 *)(DAT_0803fb94 + 1);
    }
    *(undefined1 *)(iVar6 + 0x22) = uVar4;
    *(int *)(iVar6 + 0x2c) = param_1;
    uVar7 = param_2[1];
    *(undefined4 *)(iVar6 + 0x54) = *param_2;
    *(undefined4 *)(iVar6 + 0x58) = uVar7;
    *(undefined1 *)(iVar6 + 0x10) = 1;
    *(byte *)(iVar6 + 0x11) = param_3;
    if ((param_3 & 1) == 0) {
      bVar5 = *(byte *)(iVar6 + 10) & 0xef;
    }
    else {
      bVar5 = *(byte *)(iVar6 + 10) | 0x10;
    }
    *(byte *)(iVar6 + 10) = bVar5;
    *(byte *)(iVar6 + 0x4c) = param_3 & 1;
    pbVar8 = (byte *)(iVar6 + 0x4a);
    *pbVar8 = *pbVar8 & 0xef | (param_3 & 1) << 4;
    bVar1 = param_3 < 2;
    if (bVar1) {
      bVar5 = *(byte *)(iVar6 + 10) | 0x20;
    }
    else {
      bVar5 = *(byte *)(iVar6 + 10) & 0xdf;
    }
    *(byte *)(iVar6 + 10) = bVar5;
    *(bool *)(iVar6 + 0x4d) = bVar1;
    *pbVar8 = *pbVar8 & 0xdf | bVar1 << 5;
  }
  return in_lr;
}


