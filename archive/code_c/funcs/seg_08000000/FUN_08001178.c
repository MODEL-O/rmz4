// undefined FUN_08001178(void)
// entry 0x8001178


undefined4 FUN_08001178(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_080011bc;
  if ((*DAT_080011b8 < 0xa0) || (*DAT_080011b8 == 0xe3)) {
    puVar2 = *(undefined2 **)(DAT_080011bc + 0xc);
    **(undefined2 **)(DAT_080011bc + 4) = *puVar2;
    *(undefined2 **)(iVar1 + 0xc) = puVar2 + 1;
    puVar2 = *(undefined2 **)(iVar1 + 0x30);
    **(undefined2 **)(iVar1 + 0x28) = *puVar2;
    *(undefined2 **)(iVar1 + 0x30) = puVar2 + 1;
  }
  return in_lr;
}


