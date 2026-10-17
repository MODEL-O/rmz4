// undefined FUN_0810e480(void)
// entry 0x810e480


undefined4 FUN_0810e480(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0810e4b8;
  *(undefined1 *)(DAT_0810e4b8 + 0x598) = 0;
  *(undefined1 *)(iVar1 + DAT_0810e4bc) = 0x1e;
  *(undefined1 *)(iVar1 + DAT_0810e4c0) = 0;
  *(undefined1 *)(iVar1 + DAT_0810e4c4) = 0x16;
  puVar2 = DAT_0810e4c8;
  *DAT_0810e4c8 = 0;
  puVar2[1] = param_1;
  puVar2[5] = 0;
  *(undefined2 *)((int)puVar2 + 10) = 0;
  return in_lr;
}


