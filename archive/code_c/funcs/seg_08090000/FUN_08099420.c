// undefined FUN_08099420(void)
// entry 0x8099420


undefined4 FUN_08099420(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cd28(param_1);
    FUN_0801cf00(param_1,DAT_0809944c);
    if (*(byte *)(param_1 + 0xbc) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    bVar1 = *(byte *)(param_1 + 0xbc) & 1;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    FUN_080dd574(param_1 + 0x54,1,0,*(byte *)(param_1 + 10) >> 4 & 1);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0xffffff40;
    }
    else {
      uVar3 = 0xc0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0x12);
  bVar1 = *(char *)(param_1 + 0x12) - 2;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (bVar1 < 0xdd) {
    *(undefined1 *)(param_1 + 0x12) = 0xdd;
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar6;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar2 = FUN_08007c7c(iVar4,iVar6 + 0xc00);
  if (sVar2 != 0) {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + 0x600;
    FUN_080d0c88(1,&local_14);
    FUN_08002b10(0x2a);
    FUN_0802ab88(3,0x15,param_1 + 0x54);
    if (*(ushort *)(DAT_08099548 + 0xc) <= DAT_0809954c) {
      *(ushort *)(DAT_08099548 + 0xc) = *(ushort *)(DAT_08099548 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08099550);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0x10);
  }
  return in_lr;
}


