// undefined FUN_080028ec(void)
// entry 0x80028ec


void FUN_080028ec(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = 0x02000a40;
  puVar1 = 0x04000052;
  (*(undefined2 *)0x04000052) = ((undefined2 *)0x02000a40)[1];
  puVar1[1] = puVar2[2];
  puVar1[-1] = *puVar2;
  return;
}


