// undefined FUN_08045668(void)
// entry 0x8045668


undefined4 FUN_08045668(int param_1,int param_2,byte param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  iVar5 = FUN_08005500(*DAT_080456bc);
  iVar2 = DAT_08045730;
  iVar1 = DAT_080456c0;
  if (iVar5 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar5 + 9) = 0x17;
      *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar1 + 0x5c);
      *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0xbf;
      *(undefined1 *)(iVar5 + 0x25) = 0x10;
      *(undefined2 *)(iVar5 + 0x20) = *DAT_080456c4;
      uVar3 = *DAT_080456c8;
    }
    else {
      *(undefined1 *)(iVar5 + 9) = 0x17;
      *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar2 + 0x5c);
      *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0xbf;
      *(undefined1 *)(iVar5 + 0x25) = 0x10;
      *(undefined2 *)(iVar5 + 0x20) = *(undefined2 *)(DAT_08045734 + 2);
      uVar3 = *(undefined1 *)(DAT_08045738 + 1);
    }
    *(undefined1 *)(iVar5 + 0x22) = uVar3;
    *(int *)(iVar5 + 0x28) = param_2;
    *(int *)(iVar5 + 0x2c) = param_1;
    *(undefined4 *)(iVar5 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
    *(undefined4 *)(iVar5 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined1 *)(iVar5 + 0x10) = 2;
    *(undefined1 *)(iVar5 + 0x11) = 0;
    if (param_3 == 0) {
      bVar4 = *(byte *)(iVar5 + 10) & 0xef;
    }
    else {
      bVar4 = *(byte *)(iVar5 + 10) | 0x10;
    }
    *(byte *)(iVar5 + 10) = bVar4;
    *(byte *)(iVar5 + 0x4c) = param_3 & 1;
    pbVar6 = (byte *)(iVar5 + 0x4a);
    *pbVar6 = *pbVar6 & 0xef | (param_3 & 1) << 4;
    if (param_4 == 0) {
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xdf;
    }
    else {
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) | 0x20;
    }
    *(byte *)(iVar5 + 0x4d) = param_4 & 1;
    *pbVar6 = *pbVar6 & 0xdf | (param_4 & 1) << 5;
  }
  return in_lr;
}


