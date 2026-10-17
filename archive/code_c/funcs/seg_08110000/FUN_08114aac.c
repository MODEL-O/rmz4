// undefined FUN_08114aac(void)
// entry 0x8114aac


undefined4 FUN_08114aac(undefined4 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  
  puVar1 = DAT_08114b04;
  *(undefined1 *)((int)DAT_08114b04 + DAT_08114b08) = 0x20;
  iVar2 = DAT_08114b0c;
  *(undefined1 *)((int)puVar1 + DAT_08114b0c) = 0x20;
  *(undefined1 *)((int)puVar1 + iVar2 + -1) = 0x20;
  *(undefined4 *)(puVar1 + 0x204) = 0;
  FUN_08002348();
  *DAT_08114b10 = 0;
  puVar3 = DAT_08114b14;
  *DAT_08114b14 = 0;
  *(undefined1 *)(puVar3 + 7) = 0xff;
  *DAT_08114b18 = 0;
  *puVar1 = 0;
  *DAT_08114b1c = (ushort)DAT_08114b20 & *DAT_08114b1c & (ushort)DAT_08114b24;
  FUN_081126ac(param_1,0x300);
  return in_lr;
}


