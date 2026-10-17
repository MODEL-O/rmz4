// undefined FUN_080b4734(void)
// entry 0x80b4734


undefined4 FUN_080b4734(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  byte bVar6;
  byte *pbVar7;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0x10) * 9 + DAT_080b476c & 0xffff);
    bVar6 = *(byte *)(param_1 + 0xbc) ^ 1;
    if (bVar6 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    bVar6 = bVar6 & 1;
    *(byte *)(param_1 + 0x4c) = bVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar6 << 4;
    FUN_080dd574(param_1 + 0x54,9,*(undefined1 *)(param_1 + 0x10),*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
  if (sVar3 != 0) {
    uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_080b4814;
    pbVar7 = (byte *)(param_1 + 0xbc);
    bVar6 = *pbVar7;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar6 = bVar6 | 0x10;
    }
    FUN_080d4c8c(&local_1c,DAT_080b4818,0,bVar6);
    if (*(char *)(param_1 + 0x10) == '\0') {
      bVar6 = *pbVar7;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        bVar6 = bVar6 | 0x10;
      }
      FUN_080d4c8c(&local_1c,DAT_080b4844,0,bVar6);
    }
    else {
      bVar6 = *pbVar7;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        bVar6 = bVar6 | 0x10;
      }
      FUN_080d4c8c(&local_1c,DAT_080b486c,0,bVar6);
    }
    FUN_080d0c88(1,&local_1c);
    FUN_08002b10(0x2a);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_0802ab88(3,0x29,&local_1c);
    }
    else {
      FUN_0802ab88(3,0x28,&local_1c);
    }
    if (*(ushort *)(DAT_080b48d8 + 0xc) <= DAT_080b48dc) {
      *(ushort *)(DAT_080b48d8 + 0xc) = *(ushort *)(DAT_080b48d8 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b48e0);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0x10);
  }
  return in_lr;
}


