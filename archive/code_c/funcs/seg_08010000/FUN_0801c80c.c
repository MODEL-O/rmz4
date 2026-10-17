// undefined FUN_0801c80c(void)
// entry 0x801c80c


undefined4 FUN_0801c80c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_080054b4();
  while( true ) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar2 == param_1 + 0x14) break;
    bVar1 = *(byte *)(iVar2 + 10);
    if ((bVar1 & 4) != 0) {
      iVar3 = iVar2 + 0x74;
      if ((bVar1 & 2) == 0) {
        FUN_0800580c(iVar3);
      }
      else if ((bVar1 & 0x40) == 0) {
        FUN_080058cc(iVar3,(bVar1 & 0x30) >> 4);
      }
      else {
        FUN_080059d4(iVar3,(bVar1 & 0x30) >> 4,*(undefined1 *)(iVar2 + 0x24));
      }
    }
  }
  return in_lr;
}


