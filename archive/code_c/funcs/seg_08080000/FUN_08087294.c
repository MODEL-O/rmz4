// undefined FUN_08087294(void)
// entry 0x8087294


undefined4 FUN_08087294(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && (local_c = *(int *)(param_1 + 0x2c), local_c == 0))
  {
    if ((*(int *)(DAT_080872e0 + DAT_080872e4) < *(int *)(param_1 + 0x58)) &&
       ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20)) {
      local_10 = 0x800;
      FUN_08088ff0(param_1 + 0x54,&local_10,6,8);
    }
    else {
      iVar1 = FUN_0802adac(0,param_1,DAT_0808730c);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0xd) = 0xb;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
  }
  return in_lr;
}


