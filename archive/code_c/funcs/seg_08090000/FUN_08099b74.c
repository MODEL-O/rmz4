// undefined FUN_08099b74(void)
// entry 0x8099b74


undefined4 FUN_08099b74(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cd28(param_1);
    FUN_0801cf00(param_1,DAT_08099ba0);
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
    FUN_080dd574(param_1 + 0x54,2,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0x12);
  bVar1 = *(char *)(param_1 + 0x12) + 3;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (0x22 < bVar1) {
    *(undefined1 *)(param_1 + 0x12) = 0x22;
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (*(int *)(param_1 + 0xb8) < iVar2) {
      FUN_0801cff0(param_1);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x12) == '\"') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_1c = *(int *)(param_1 + 0x54);
      iVar2 = 0x1000;
    }
    else {
      local_1c = *(int *)(param_1 + 0x54);
      iVar2 = DAT_08099c50;
    }
    local_1c = local_1c + iVar2;
    local_18 = *(int *)(param_1 + 0x58) + DAT_08099c80;
    bVar1 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar1 = bVar1 | 0x10;
    }
    FUN_080d4c8c(&local_1c,DAT_08099c84,0,bVar1);
    bVar1 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar1 = bVar1 | 0x10;
    }
    FUN_080d4c8c(&local_1c,DAT_08099cac,0,bVar1);
    FUN_080d0c88(1,&local_1c);
    FUN_08002b10(0x2a);
    FUN_0802ab88(3,0x2c,param_1 + 0x54);
    if (*(ushort *)(DAT_08099d08 + 0xc) <= DAT_08099d0c) {
      *(ushort *)(DAT_08099d08 + 0xc) = *(ushort *)(DAT_08099d08 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08099d10);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


