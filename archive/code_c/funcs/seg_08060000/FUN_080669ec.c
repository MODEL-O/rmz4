// undefined FUN_080669ec(void)
// entry 0x80669ec


undefined4 FUN_080669ec(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      if (DAT_08066b20 <
          (int)(uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70))) {
        *(undefined1 *)(param_1 + 0xf) = 1;
      }
      else {
        FUN_0801cf00(param_1,DAT_08066b20 + -10);
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0x12) = 0x40;
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x54);
      if (DAT_08066a54 <
          (int)(uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70))) {
        *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 0xd8) ^ 1) & 1;
        bVar1 = (*(byte *)(param_1 + 0xd8) ^ 1) & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
        if (bVar1 == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar1;
        local_1c = *(int *)(param_1 + 0x58);
        FUN_0801cf00(param_1,DAT_08066afc);
        uVar3 = FUN_0809cd78(param_1,param_1 + 0x54,2,1);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
        *(undefined1 *)(param_1 + 0xf) = 1;
      }
      else {
        local_1c = *(int *)(param_1 + 0x58) + DAT_08066a58;
        FUN_0801cf00(param_1,DAT_08066a5c);
        uVar3 = FUN_0809cd78(param_1,param_1 + 0x54,2,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          *(undefined4 *)(param_1 + 0x5c) = 0xffffffe0;
          uVar3 = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x5c) = 0x20;
          uVar3 = 0xffffffff;
        }
        *(undefined4 *)(param_1 + 100) = uVar3;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      FUN_080d0dc4(0,&local_20,0x200,*(undefined1 *)(param_1 + 0xd8));
      *(undefined1 *)(param_1 + 0x12) = 0x20;
      FUN_08002b10(0x2f);
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    if (*DAT_08066b40 == 9) {
      FUN_08002b10(0x69);
    }
    else {
      FUN_08002b10(0x6a);
    }
    FUN_08002b5c(0x61);
    *(undefined4 *)(*DAT_08066bc8 + 0xec) = 0;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((*(ushort *)(DAT_08066bcc + 8) & 1) != 0) && ((*(byte *)(DAT_08066bcc + 0x12) & 1) == 0)) {
      *(ushort *)(DAT_08066bcc + 8) = (ushort)DAT_08066bd0 & *(ushort *)(DAT_08066bcc + 8) | 0x10;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0xd);
  if (cVar2 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined1 *)(param_1 + 0x12) = 0x10;
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
  }
  else if (cVar2 == '\x01') {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
      uStack_18 = 0;
      uStack_14 = 0;
      if (*(char *)(param_1 + 0xf) == '\0') {
        uStack_14 = DAT_08066c04;
      }
      uVar3 = FUN_080d296c(param_1,&uStack_18);
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
      *(undefined1 *)(param_1 + 0xd) = 2;
    }
  }
  else {
    if (cVar2 == '\x02') {
      if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
        return in_lr;
      }
      *(byte *)(DAT_08066c24 + 0x12) = *(byte *)(DAT_08066c24 + 0x12) | 2;
      *(undefined1 *)(param_1 + 0x12) = 0x20;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}


