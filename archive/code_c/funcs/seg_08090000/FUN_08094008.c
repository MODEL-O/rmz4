// undefined FUN_08094008(void)
// entry 0x8094008


undefined4 FUN_08094008(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x02') {
      puVar6 = (uint *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_08094088);
      uVar4 = *puVar6;
      pbVar5 = (byte *)(((int)uVar4 >> 3) + DAT_08094084 + 4);
      *pbVar5 = (byte)(1 << (uVar4 & 7)) | *pbVar5;
      uVar4 = *puVar6;
      pbVar5 = (byte *)(((int)uVar4 >> 3) + DAT_0809408c);
      *pbVar5 = (byte)(1 << (uVar4 & 7)) | *pbVar5;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_08094090);
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar2 = FUN_080947b4(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x13) == '\0') {
    FUN_08094a38(param_1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') ||
     ((*(char *)(param_1 + 0x13) != '\0' &&
      (iVar2 = FUN_080947b4(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58))
      , iVar2 != 0)))) {
    FUN_08002b10(0x2a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar4 = DAT_08094180 * *DAT_0809417c + DAT_08094184;
    local_1c = *(int *)(param_1 + 0x54) + (((uVar4 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    uVar4 = DAT_08094180 * (uVar4 & 0x7fffffff) + DAT_08094184;
    *DAT_0809417c = uVar4 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x58) + ((uVar4 & 0x7fffffff) >> 0x10 & 7) * 0x100 + DAT_08094188;
    FUN_080d0c88(1,&local_1c);
    FUN_08094df0(param_1);
    FUN_08094f00(param_1);
    if (*(ushort *)(DAT_0809418c + 0xc) <= DAT_08094190) {
      *(ushort *)(DAT_0809418c + 0xc) = *(ushort *)(DAT_0809418c + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08094194);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


