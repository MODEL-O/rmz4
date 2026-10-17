// undefined FUN_0806b028(void)
// entry 0x806b028


undefined4 FUN_0806b028(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      FUN_0801cf00(param_1,DAT_0806b0c8);
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0x12) = 0x40;
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x54);
      local_1c = *(int *)(param_1 + 0x58) + DAT_0806b074;
      FUN_0801cf00(param_1,DAT_0806b078);
      uVar2 = FUN_0809f40c(param_1);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0xffffffe0;
        uVar2 = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0x20;
        uVar2 = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 100) = uVar2;
      FUN_080d0dc4(0,&local_20,0x200,*(undefined1 *)(param_1 + 0xdb));
      *(undefined1 *)(param_1 + 0x12) = 0x20;
      FUN_08002b10(0x2f);
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    if (*DAT_0806b0cc == 8) {
      FUN_08002b10(0xd0);
    }
    else {
      FUN_08002b10(0xd1);
    }
    if (*(char *)(param_1 + 0xd8) != '\0') {
      FUN_08002b5c(200);
      *(char *)(param_1 + 0xd8) = '\0';
    }
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((*(ushort *)(DAT_0806b15c + 8) & 1) != 0) && ((*(byte *)(DAT_0806b15c + 0x12) & 1) == 0)) {
      *(ushort *)(DAT_0806b15c + 8) = (ushort)DAT_0806b160 & *(ushort *)(DAT_0806b15c + 8) | 0x10;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined1 *)(param_1 + 0x12) = 0x10;
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
  }
  else if (cVar1 == '\x01') {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
      local_18 = 0;
      local_14 = DAT_0806b18c;
      uVar2 = FUN_080d296c(param_1);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      *(undefined1 *)(param_1 + 0xd) = 2;
    }
  }
  else {
    if (cVar1 == '\x02') {
      if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
        return in_lr;
      }
      *(byte *)(DAT_0806b1ac + 0x12) = *(byte *)(DAT_0806b1ac + 0x12) | 2;
      *(undefined1 *)(param_1 + 0x12) = 0x20;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}


