// undefined FUN_0810e584(void)
// entry 0x810e584


undefined4 FUN_0810e584(uint param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_0810e5c0;
  iVar2 = ((param_1 & 0xffff) >> 8) * 4;
  iVar2 = *(int *)(iVar2 + DAT_0810e5c4) +
          (uint)*(ushort *)((param_1 & 0xff) * 2 + *(int *)(iVar2 + DAT_0810e5c8));
  *(int *)(DAT_0810e5c0 + 0xc) = iVar2;
  *(undefined4 *)(puVar1 + 4) = 1;
  if (*(char *)(puVar1 + 6) == '\x01') {
    *(int *)(puVar1 + 0x10) = iVar2;
    puVar1[1] = 1;
    *(undefined1 *)((int)puVar1 + 0xd) = 5;
  }
  else {
    FUN_0810e66c(puVar1);
    FUN_0810e690(puVar1);
    if (*(char *)(puVar1 + 2) == '\0') {
      *(undefined4 *)(puVar1 + 6) = 2;
    }
    else {
      *(undefined4 *)(puVar1 + 6) = 1;
    }
  }
  *puVar1 = 1;
  return in_lr;
}


