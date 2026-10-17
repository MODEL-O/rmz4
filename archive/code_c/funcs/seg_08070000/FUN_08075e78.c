// undefined FUN_08075e78(void)
// entry 0x8075e78


undefined4 FUN_08075e78(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_08075e94 + 0x54)) {
      uVar1 = 0xf8;
    }
    else {
      uVar1 = 0x88;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    *(undefined1 *)(param_1 + 0x13) = 0;
    if (*(short *)(param_1 + 0xa4) < 0x10) {
      uVar3 = 0x300;
    }
    else if (*(short *)(param_1 + 0xa4) < 0x20) {
      uVar3 = 0x280;
    }
    else {
      uVar3 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar4 = *(int *)(param_1 + 0x60) + 0x10;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar4 = DAT_08075f5c;
  iVar5 = *(int *)(param_1 + 0x60) *
          (int)*(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + DAT_08075f5c) >> 8;
  *(int *)(param_1 + 0x5c) = iVar5;
  iVar6 = *(int *)(param_1 + 0x54) + iVar5;
  *(int *)(param_1 + 0x54) = iVar6;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       ((int)*(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar4) * *(int *)(param_1 + 0x60) >> 8
       );
  if (iVar5 < 1) {
    if (*(int *)(param_1 + 0xc4) + 0x3e00 <= iVar6) goto LAB_08075fb4;
    FUN_08002b10(0x38);
    local_18 = *(undefined4 *)(param_1 + 0xc4);
    local_14 = *(int *)(param_1 + 0x58) + DAT_08075fd0;
    FUN_080e2e8c(&local_18,1,0);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xc4) + 0x3e00;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    cVar2 = *(char *)(param_1 + 0x13) * -4 + -8;
  }
  else {
    if (iVar6 <= *(int *)(param_1 + 200) + DAT_08075f60) goto LAB_08075fb4;
    FUN_08002b10(0x38);
    local_18 = *(undefined4 *)(param_1 + 200);
    local_14 = *(int *)(param_1 + 0x58) + DAT_08075f64;
    FUN_080e2e8c(&local_18,1,1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 200) + DAT_08075f60;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    cVar2 = *(char *)(param_1 + 0x13) * '\x04' + -0x78;
  }
  *(char *)(param_1 + 0x12) = cVar2;
LAB_08075fb4:
  if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb8) + DAT_08075fd4) {
    *(undefined1 *)(param_1 + 0xd) = 0x10;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


