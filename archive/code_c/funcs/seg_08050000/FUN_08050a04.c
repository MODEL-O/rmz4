// undefined FUN_08050a04(void)
// entry 0x8050a04


undefined4 FUN_08050a04(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      FUN_0801cf00(param_1,DAT_08050ac4);
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xf) = 1;
      *(undefined1 *)(param_1 + 0x12) = 0x10;
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x54);
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_1c = *(int *)(param_1 + 0x58);
        iVar3 = DAT_08050a70;
      }
      else {
        local_1c = *(int *)(param_1 + 0x58);
        iVar3 = 0x1a00;
      }
      local_1c = local_1c + iVar3;
      FUN_080d0dc4(0,&local_20,0x200,*(undefined1 *)(param_1 + 0xd4));
      FUN_0801cf00(param_1,DAT_08050a74);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0xffffffe0;
        uVar2 = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0x20;
        uVar2 = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 100) = uVar2;
      *(undefined1 *)(param_1 + 0x12) = 0x20;
      FUN_08090ebc(param_1);
      FUN_08002b10(0x2f);
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    FUN_08002b5c(0xe4);
    if (*DAT_08050ac8 == 6) {
      FUN_08002b10(0xf2);
    }
    else {
      FUN_08002b10(0xf3);
    }
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((*(ushort *)(DAT_08050b44 + 8) & 1) != 0) && ((*(byte *)(DAT_08050b44 + 0x12) & 1) == 0)) {
      *(ushort *)(DAT_08050b44 + 8) = (ushort)DAT_08050b48 & *(ushort *)(DAT_08050b44 + 8) | 0x10;
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
      local_14 = DAT_08050ba4;
      if (*(char *)(param_1 + 0xf) == '\0') {
        local_18 = 0xe00;
        if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
          local_14 = 0x1e00;
        }
      }
      else {
        local_18 = 0xa00;
        if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
          local_14 = 0x1e00;
        }
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
      *(byte *)(DAT_08050bc4 + 0x12) = *(byte *)(DAT_08050bc4 + 0x12) | 2;
      *(undefined1 *)(param_1 + 0x12) = 0x20;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}


