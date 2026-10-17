// undefined FUN_080012ec(void)
// entry 0x80012ec


void FUN_080012ec(int param_1)

{
  undefined1 *puVar1;
  puVar1 = (undefined1 *)
           (*(int *)(DAT_08001320 + DAT_08001324) * 0x18 + DAT_08001320 + DAT_08001328);
  if (param_1 != 0) {
    *(short *)(puVar1 + 2) = (short)param_1;
    *puVar1 = 4;
    FUN_08000300(puVar1 + 4,puVar1 + 8,*(int *)DAT_0800132c);
  }
  return;
}


