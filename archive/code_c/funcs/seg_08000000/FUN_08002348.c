// undefined FUN_08002348(void)
// entry 0x8002348


undefined4 FUN_08002348(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_08002360;
  puVar2 = (undefined2 *)(DAT_08002360 + 0x1e);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + -1;
  } while (iVar1 <= (int)puVar2);
  return in_lr;
}


