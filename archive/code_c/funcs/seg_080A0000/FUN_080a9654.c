// undefined FUN_080a9654(void)
// entry 0x80a9654


undefined4 FUN_080a9654(int param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080a96a8);
    pbVar4 = (byte *)(param_1 + 0xbc);
    *(byte *)(param_1 + 0x4c) = *pbVar4 & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (*pbVar4 & 1) << 4;
    if ((*pbVar4 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    FUN_080dd574(param_1 + 0x54,6,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
  if (sVar2 != 0) {
    iVar5 = param_1 + 0x54;
    bVar1 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar1 = bVar1 | 0x10;
    }
    FUN_080d4c8c(iVar5,DAT_080a9710,0,bVar1);
    FUN_080d0c88(1,iVar5);
    FUN_08002b10(0x2a);
    FUN_0802ab88(0,10,iVar5);
    if (*(ushort *)(DAT_080a9768 + 0xc) <= DAT_080a976c) {
      *(ushort *)(DAT_080a9768 + 0xc) = *(ushort *)(DAT_080a9768 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,iVar5);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a9770);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


