// undefined FUN_0810d4a8(void)
// entry 0x810d4a8


undefined4 FUN_0810d4a8(void)

{
  int iVar1;
  undefined4 in_lr;
  
  FUN_08128be0(DAT_0810d4f8,(*DAT_0810d4fc & 0xc) * 0x1000 + DAT_0810d500,0x200);
  FUN_08128be0(DAT_0810d504,DAT_0810d508,8);
  iVar1 = DAT_0810d50c;
  *(undefined1 *)(DAT_0810d50c + 0x598) = 0;
  *(undefined1 *)(iVar1 + DAT_0810d510) = 0x1e;
  *(undefined1 *)(iVar1 + DAT_0810d514) = 0;
  *(undefined1 *)(iVar1 + DAT_0810d518) = 0x16;
  FUN_0810d51c();
  return in_lr;
}


