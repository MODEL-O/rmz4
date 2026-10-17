// undefined FUN_08019724(void)
// entry 0x8019724


undefined4 FUN_08019724(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_0801974c = *DAT_0801974c & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
    *DAT_08019750 = 0xd2000;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


