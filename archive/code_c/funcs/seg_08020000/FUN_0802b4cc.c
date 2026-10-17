// undefined FUN_0802b4cc(void)
// entry 0x802b4cc


undefined8 FUN_0802b4cc(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar1 = DAT_0802b51c;
  iVar2 = FUN_08005500(*DAT_0802b51c);
  iVar3 = iVar2;
  if ((iVar2 != 0) && (iVar2 == *DAT_0802b520)) {
    iVar3 = FUN_0802b4cc();
    FUN_080055c8(*puVar1,iVar2);
  }
  *(undefined1 *)(iVar3 + 0x10) = 1;
  *(undefined2 *)(iVar3 + 0x20) = 0x200;
  *(undefined1 *)(iVar3 + 0x22) = 4;
  *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
  *(undefined1 *)(iVar3 + 0x1d) = *(undefined1 *)(iVar3 + 0x1c);
  return CONCAT44(in_lr,iVar3);
}


