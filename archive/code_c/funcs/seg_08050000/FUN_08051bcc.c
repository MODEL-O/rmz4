// undefined FUN_08051bcc(void)
// entry 0x8051bcc


undefined4 FUN_08051bcc(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08051c28);
    FUN_08002b10(0xe9);
    *(undefined1 *)(param_1 + 0xd7) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\t' < *(char *)(param_1 + 0x71)) {
      FUN_08002b10(0xeb);
      FUN_08005784(param_1 + 0x74,DAT_08051c2c);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
      local_1c = *(int *)(param_1 + 0x54);
      local_18 = FUN_08008534(local_1c,*(undefined4 *)(param_1 + 0x58));
      iVar6 = DAT_08051c9c;
      puVar1 = DAT_08051c98;
      uVar4 = DAT_08051c9c * *DAT_08051c98 + DAT_08051ca0;
      uVar7 = uVar4 & 0x7fffffff;
      *DAT_08051c98 = uVar7;
      uVar3 = DAT_08051cd8;
      uVar2 = DAT_08051ca4;
      local_1c = local_1c + 0x1000 + ((uVar4 & 0x7fffffff) >> 0x10 & 0x1f) * -0x100;
      if ((*(byte *)(param_1 + 0x12) & 3) == 1) {
        uVar4 = iVar6 * uVar7 + DAT_08051ca0;
        *puVar1 = uVar4 & 0x7fffffff;
        FUN_080d4c8c(&local_1c,uVar2,0,((uVar4 & 0x7fffffff) >> 0x10 & 1) << 4);
      }
      else {
        uVar4 = iVar6 * uVar7 + DAT_08051cdc;
        *puVar1 = uVar4 & 0x7fffffff;
        FUN_080d4c8c(&local_1c,uVar3,0,((uVar4 & 0x7fffffff) >> 0x10 & 1) << 4);
      }
    }
    if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
      iVar5 = *(int *)(param_1 + 0x54);
      iVar6 = 0x100;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x54);
      iVar6 = DAT_08051d1c;
    }
    *(int *)(param_1 + 0x54) = iVar5 + iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x2c0;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if (*(int *)(param_1 + 0xb8) + 0x5600 < *(int *)(param_1 + 0x58)) {
    *(undefined1 *)(param_1 + 0xd) = 0x11;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


