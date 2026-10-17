// undefined FUN_0803d180(void)
// entry 0x803d180


undefined4 FUN_0803d180(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sVar2 = CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0xb4) + 0x1e),
                     *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0x70));
    if (sVar2 == 0x1b00) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      if (1 < *(byte *)(param_1 + 0x12)) {
        FUN_0801cff0(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        FUN_08005794(param_1 + 0x74,
                     *(undefined4 *)
                      (*(char *)(param_1 + 0x71) * 4 +
                      *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0803d338)),
                     *(undefined1 *)(param_1 + 0xc1),*(undefined1 *)(param_1 + 0xc0),
                     *(undefined1 *)(param_1 + 0xc2),0xffffffff);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        return in_lr;
      }
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
      return in_lr;
    }
    if (sVar2 == 0x1b01) {
      if (*(char *)(param_1 + 0x10) == '\x16') {
        FUN_0801cf00(param_1,DAT_0803d1c0);
      }
      else {
        FUN_0801cf00(param_1,DAT_0803d1ec);
      }
      FUN_0801cff0(param_1);
      bVar1 = *(byte *)(param_1 + 10);
      *(byte *)(param_1 + 10) = bVar1 | 1;
      if ((bVar1 & 0x10) == 0) {
        local_14 = *(int *)(param_1 + 0x54) + DAT_0803d22c;
      }
      else {
        local_14 = *(int *)(param_1 + 0x54) + 0x1100;
      }
      local_10 = *(int *)(param_1 + 0x58) + DAT_0803d230;
      sVar2 = FUN_08007c7c(local_14,*(int *)(param_1 + 0x58) + 0x800);
      if (sVar2 != 0) {
        iVar3 = FUN_08008534(local_14,local_10);
        if (iVar3 - local_10 < 0) {
          if (DAT_0803d29c < local_10 - iVar3) goto LAB_0803d292;
        }
        else if (DAT_0803d234 < iVar3 - local_10) goto LAB_0803d292;
        local_10 = iVar3;
        FUN_0804b160(&local_14,0,0);
        FUN_0804b160(&local_14,0,1);
        uVar6 = DAT_0803d2a4 * *DAT_0803d2a0 + DAT_0803d2a8;
        *DAT_0803d2a0 = uVar6 & 0x7fffffff;
        FUN_080d1bcc(&local_14,4,(uVar6 & 0x7fffffff) >> 0x10 & 1);
        FUN_080d1bcc(&local_14,5,0);
        FUN_080d1bcc(&local_14,5,1);
        FUN_08002b10(0xa8);
      }
LAB_0803d292:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803d2e0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar5 = *(undefined4 *)(*piVar4 + 0xc);
  }
  else {
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803d36c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar5 = *(undefined4 *)(*piVar4 + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  return in_lr;
}


