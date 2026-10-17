// undefined FUN_080546e8(void)
// entry 0x80546e8


undefined4 FUN_080546e8(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  short local_24 [4];
  int local_1c;
  int local_18;
  
  FUN_08129258(local_24,DAT_0805477c,8);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x57);
    FUN_0801cf00(param_1,0x2c00);
    FUN_0805516c(param_1,0xc,0);
    *(undefined4 *)(param_1 + 0xcc) = 0x1e0;
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == 0x2c00) &&
     (*(char *)(param_1 + 0x12) == '\0')) {
    FUN_0801cf00(param_1,DAT_08054780);
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_08054fb0(param_1);
  }
  else {
    iVar4 = FUN_08055188(param_1,*(undefined4 *)(param_1 + 0xb8));
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined1 *)(param_1 + 0xb7) = 0;
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_08054818) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    piVar5 = (int *)(param_1 + 0xcc);
    if (*piVar5 == 0) {
      *(undefined1 *)(param_1 + 0xe) = 4;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      iVar4 = FUN_08129050(*piVar5,0x18);
      if (iVar4 == 0) {
        FUN_08002b10(0x13a);
        if (*piVar5 == 0x1e0) {
          *(char *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54) < *(int *)(*DAT_0805481c + 0x54);
        }
        cVar2 = FUN_08128fb8(0x1e0 - *piVar5,0x18);
        bVar3 = FUN_08129198(cVar2 + *(char *)(param_1 + 0xb4) * '\n',0x14);
        bVar1 = 9 < bVar3;
        if (bVar1) {
          bVar3 = bVar3 - 10;
        }
        uVar6 = (uint)bVar1;
        local_1c = *(int *)(param_1 + 0x54) + (int)local_24[uVar6 * 2];
        local_18 = *(int *)(param_1 + 0x58) + (int)local_24[uVar6 * 2 + 1];
        FUN_080bfb24(param_1,&local_1c,bVar3);
      }
      *piVar5 = *piVar5 + -1;
    }
  }
  return in_lr;
}


