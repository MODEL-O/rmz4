// undefined FUN_080028ec(void)
// entry 0x80028ec


void FUN_080028ec(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = DAT_08002908;
  puVar1 = DAT_08002904;
  *(int *)DAT_08002904 = DAT_08002908[1];
  puVar1[1] = puVar2[2];
  puVar1[-1] = *puVar2;
  return;
}


