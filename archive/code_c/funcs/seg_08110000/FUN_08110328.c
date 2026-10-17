// undefined FUN_08110328(void)
// entry 0x8110328


undefined4 FUN_08110328(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  
  FUN_0800201c();
  puVar1 = DAT_08110394;
  *(undefined1 *)((int)DAT_08110394 + DAT_08110398) = 0x20;
  iVar2 = DAT_0811039c;
  *(undefined1 *)((int)puVar1 + DAT_0811039c) = 0x20;
  *(undefined1 *)((int)puVar1 + iVar2 + -1) = 0x20;
  *(undefined4 *)(puVar1 + 0x204) = 0;
  FUN_08002348();
  *DAT_081103a0 = 0;
  puVar3 = DAT_081103a4;
  *DAT_081103a4 = 0;
  *(undefined1 *)(puVar3 + 7) = 0xff;
  *DAT_081103a8 = 0;
  *puVar1 = 0;
  FUN_0810d4a8();
  *DAT_081103ac = (ushort)DAT_081103b0 & *DAT_081103ac & (ushort)DAT_081103b4;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return in_lr;
}


