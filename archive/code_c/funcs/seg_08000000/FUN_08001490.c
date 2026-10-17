// undefined FUN_08001490(void)
// entry 0x8001490


undefined4 FUN_08001490(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = 0;
  iVar2 = DAT_080014ac;
  do {
    FUN_080014b0(iVar2,iVar1);
    iVar2 = iVar2 + 0x18;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return in_lr;
}


