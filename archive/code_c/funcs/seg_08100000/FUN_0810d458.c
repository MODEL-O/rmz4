// undefined FUN_0810d458(void)
// entry 0x810d458


undefined4 FUN_0810d458(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = DAT_0810d490;
  *DAT_0810d490 = param_1;
  *(undefined4 *)((int)puVar1 + DAT_0810d494) = DAT_0810d498;
  *(undefined1 *)(puVar1 + 0x166) = 0;
  *(undefined1 *)((int)puVar1 + DAT_0810d49c) = 0x1e;
  *(undefined1 *)((int)puVar1 + DAT_0810d4a0) = 0;
  *(undefined1 *)((int)puVar1 + DAT_0810d4a4) = 0x16;
  FUN_0810d4a8();
  return in_lr;
}


