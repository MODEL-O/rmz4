// undefined FUN_080012b8(void)
// entry 0x80012b8


void FUN_080012b8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = 0x03002a68;
  puVar2 = (undefined1 *)(param_1 * 0x18 + 0x03002a68);
  *(undefined4 *)(puVar2 + 4) = param_2;
  *(uint *)(puVar2 + 8) = iVar1 + 0xffffecf8 + (uint)*(ushort *)(param_1 * 2 + 0x0882afc8);
  *(undefined2 *)(puVar2 + 2) = 0;
  puVar2[1] = 0;
  *puVar2 = 2;
  return;
}


