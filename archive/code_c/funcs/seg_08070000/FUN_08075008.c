// undefined FUN_08075008(void)
// entry 0x8075008


undefined4 FUN_08075008(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xdf) != '\0') {
      FUN_0801cc9c(param_1);
      FUN_0801ceec(param_1);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x2700;
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      FUN_0801cf00(param_1,DAT_080750d8);
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xf) = 1;
      *(undefined1 *)(param_1 + 0x12) = 0x40;
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x54);
      local_1c = *(int *)(param_1 + 0x58) + DAT_08075078;
      FUN_0801cf00(param_1,DAT_0807507c);
      uVar2 = FUN_080ab848(param_1);
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
      FUN_080d0dc4(0,&local_20,0x200,*(undefined1 *)(param_1 + 0xd8));
      *(undefined1 *)(param_1 + 0x12) = 0x20;
      FUN_08002b10(0x2f);
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    FUN_08002b5c(0xdb);
    if (*DAT_080750dc == 3) {
      FUN_08002b10(0xe0);
    }
    else {
      FUN_08002b10(0xe1);
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((*(ushort *)(DAT_0807516c + 8) & 1) != 0) && ((*(byte *)(DAT_0807516c + 0x12) & 1) == 0)) {
      *(ushort *)(DAT_0807516c + 8) = (ushort)DAT_08075170 & *(ushort *)(DAT_0807516c + 8) | 0x10;
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
      if (*(char *)(param_1 + 0xf) == '\0') {
        local_18 = 0x800;
        local_14 = DAT_080751b4;
      }
      else {
        local_18 = 0;
        local_14 = DAT_08075194;
      }
      uVar2 = FUN_080d296c(param_1,&local_18);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      *(undefined1 *)(param_1 + 0xd) = 2;
    }
  }
  else {
    if (cVar1 == '\x02') {
      if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
        return in_lr;
      }
      *(byte *)(DAT_080751d4 + 0x12) = *(byte *)(DAT_080751d4 + 0x12) | 2;
      *(undefined1 *)(param_1 + 0x12) = 0x20;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}


