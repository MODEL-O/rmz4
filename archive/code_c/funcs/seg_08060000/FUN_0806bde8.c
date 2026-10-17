// undefined FUN_0806bde8(void)
// entry 0x806bde8


undefined4 FUN_0806bde8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806be68);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0xd9) = 0;
    *(undefined1 *)(param_1 + 0xda) = 0;
    *(undefined1 *)(param_1 + 0x12) = 6;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0806be6c);
    FUN_0801cff0(param_1);
    FUN_08002b10(0xca);
    FUN_08005784(param_1 + 0x74,DAT_0806be70);
    *(undefined4 *)(param_1 + 0x60) = DAT_0806be74;
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 1) == 0) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_14 = *(int *)(param_1 + 0x54);
        iVar3 = 0x1700;
      }
      else {
        local_14 = *(int *)(param_1 + 0x54);
        iVar3 = DAT_0806be98;
      }
      local_14 = local_14 + iVar3;
      local_10 = *(int *)(param_1 + 0x58) + DAT_0806bee8;
      FUN_080dfe98(&local_14,0,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    iVar3 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar3;
    if (*(char *)(param_1 + 0xf) == '\x01') {
      if (*(int *)(param_1 + 0xb8) + DAT_0806beec <= iVar5) {
        return in_lr;
      }
      uVar4 = 0;
      uVar6 = 0;
    }
    else {
      if (*(char *)(param_1 + 0xf) != '\x02') {
        if (iVar3 < 1) {
          return in_lr;
        }
        if (*(int *)(param_1 + 0xd0) < iVar5) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xd0);
          *(undefined1 *)(param_1 + 0xd) = 0xf;
          *(undefined1 *)(param_1 + 0xe) = 0;
        }
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xb8);
        return in_lr;
      }
      if (*(int *)(param_1 + 0xb8) + DAT_0806bf18 <= iVar5) {
        return in_lr;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x2c);
      uVar6 = 1;
    }
    uVar4 = FUN_0809f3a8(param_1,uVar4,0,uVar6);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


