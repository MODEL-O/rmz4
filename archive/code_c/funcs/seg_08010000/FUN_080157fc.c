// undefined FUN_080157fc(void)
// entry 0x80157fc


undefined4 FUN_080157fc(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_08015890;
  *(undefined1 *)(DAT_08015890 + DAT_08015894) = 0;
  iVar2 = DAT_08015898;
  *(undefined1 *)(iVar1 + DAT_08015898) = 0;
  *(undefined4 *)(iVar1 + iVar2 + 7) = 0;
  *(undefined1 *)(iVar1 + iVar2 + -5) = 0;
  *(undefined1 *)(iVar1 + iVar2 + -4) = 0;
  *(undefined2 *)(iVar1 + DAT_0801589c) = 0x640;
  iVar2 = DAT_080158a0;
  *(undefined1 *)(iVar1 + DAT_080158a0) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 10) = 0;
  if ((*(byte *)(iVar1 + DAT_080158a4) & 0xf) == 2) {
    FUN_080074c0(2,5,0x66);
    FUN_080074c0(3,5,0x67);
    FUN_080074c0(4,5,0x68);
    FUN_080074c0(5,5,0x69);
    FUN_080074c0(6,5,0x6a);
    FUN_080074c0(7,5,0x6b);
    FUN_080074c0(8,5,0x6c);
  }
  return in_lr;
}


