// undefined FUN_08001108(void)
// entry 0x8001108


undefined4 FUN_08001108(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0800113c;
  if ((*DAT_08001138 < 0xa0) || (*DAT_08001138 == 0xe3)) {
    puVar2 = *(undefined2 **)(DAT_0800113c + 0xc);
    **(undefined2 **)(DAT_0800113c + 4) = *puVar2;
    *(undefined2 **)(iVar1 + 0xc) = puVar2 + 1;
  }
  return in_lr;
}


