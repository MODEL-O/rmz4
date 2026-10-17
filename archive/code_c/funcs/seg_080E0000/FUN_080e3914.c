// undefined FUN_080e3914(void)
// entry 0x80e3914


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_080e3914(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  short local_24 [4];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14 [2];
  
  FUN_08129258(local_24 + 2,DAT_080e3940,4);
  local_14[0] = *DAT_080e3944;
  local_14[1] = DAT_080e3944[1];
  if (*(byte *)(param_1 + 0x75) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0x75) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_080e38a0(param_1);
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_080e3a14;
    FUN_080d0dc4(0,&local_1c,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined1 *)(param_1 + 0x11) = 2;
    FUN_080e37a0(param_1 + 0x54,3,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_080e38a0(param_1);
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_080e3a14;
    FUN_080d0dc4(0,&local_1c,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined1 *)(param_1 + 0x11) = 4;
    FUN_080e37a0(param_1 + 0x54,5,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  if (*(byte *)(param_1 + 0x11) < 4) {
    FUN_0801cf00(param_1,local_24[*(byte *)(param_1 + 0x11)]);
    iVar2 = *(byte *)(param_1 + 0x11) - 2;
  }
  else {
    FUN_0801cf00(param_1,local_24[(uint)*(byte *)(param_1 + 0x11) + 0xfffffffe] + 0xc);
    iVar2 = *(byte *)(param_1 + 0x11) - 4;
  }
  *(undefined4 *)(param_1 + 0x5c) = local_14[iVar2];
  *(undefined4 *)(param_1 + 0x60) = DAT_080e3a64;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  return in_lr;
}


