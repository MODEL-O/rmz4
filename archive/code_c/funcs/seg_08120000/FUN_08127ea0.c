// undefined FUN_08127ea0(void)
// entry 0x8127ea0


undefined4 FUN_08127ea0(int *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (param_1[0xd] != DAT_08127f80) {
    return in_lr;
  }
  bVar1 = param_2[2];
  if (((*(char *)((int)param_1 + 0xb) != '\0') &&
      (((*param_1 != 0 && ((*(byte *)param_1[0xb] & 0x40) != 0)) ||
       (((short)param_1[1] != 0 && (-1 < param_1[1])))))) &&
     (bVar1 = param_2[2], bVar1 < *(byte *)((int)param_1 + 9))) {
    return in_lr;
  }
  param_1[0xd] = param_1[0xd] + 1;
  param_1[1] = 0;
  *param_1 = (int)param_2;
  param_1[0xc] = *(int *)(param_2 + 4);
  *(byte *)((int)param_1 + 9) = bVar1;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 0x96;
  *(undefined2 *)(param_1 + 8) = 0x96;
  *(undefined2 *)((int)param_1 + 0x1e) = 0x100;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  iVar3 = 0;
  puVar2 = (undefined1 *)param_1[0xb];
  if (*param_2 != 0) {
    if ((char)param_1[2] == '\0') goto LAB_08127f62;
    do {
      FUN_08127388(param_1,puVar2);
      *puVar2 = 0xc0;
      *(undefined4 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x40) = *(undefined4 *)(param_2 + iVar3 * 4 + 8);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x50;
      if ((int)(uint)*param_2 <= iVar3) break;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 2));
  }
  if (iVar3 < (int)(uint)*(byte *)(param_1 + 2)) {
    do {
      FUN_08127388(param_1,puVar2);
      *puVar2 = 0;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x50;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 2));
  }
LAB_08127f62:
  if ((param_2[3] & 0x80) != 0) {
    FUN_08127ca0(param_2[3]);
  }
  param_1[0xd] = DAT_08127f80;
  return in_lr;
}


