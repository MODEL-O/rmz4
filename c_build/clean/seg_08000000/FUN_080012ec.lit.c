// undefined FUN_080012ec(void)
// entry 0x80012ec


void FUN_080012ec(int param_1)

{
  undefined1 *puVar1;
  puVar1 = (undefined1 *)
           (*(int *)(0x03001760 + 0x00001350) * 0x18 + 0x03001760 + 0x00001308);
  if (param_1 != 0) {
    *(short *)(puVar1 + 2) = (short)param_1;
    *puVar1 = 4;
    FUN_08000300(puVar1 + 4,puVar1 + 8,(*(int *)0x02000000));
  }
  return;
}


