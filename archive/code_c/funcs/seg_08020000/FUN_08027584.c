// undefined FUN_08027584(void)
// entry 0x8027584


undefined4 FUN_08027584(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  
  puVar1 = DAT_080275d0;
  *(undefined1 *)((int)DAT_080275d0 + DAT_080275d4) = 0x20;
  iVar2 = DAT_080275d8;
  *(undefined1 *)((int)puVar1 + DAT_080275d8) = 0x20;
  *(undefined1 *)((int)puVar1 + iVar2 + -1) = 0x20;
  *(undefined4 *)(puVar1 + 0x204) = 0;
  FUN_08002348();
  *DAT_080275dc = 0;
  puVar3 = DAT_080275e0;
  *DAT_080275e0 = 0;
  *(undefined1 *)(puVar3 + 7) = 0xff;
  *DAT_080275e4 = 0;
  *puVar1 = 0;
  *DAT_080275e8 = (ushort)DAT_080275ec & *DAT_080275e8;
  FUN_080029c0();
  return in_lr;
}


